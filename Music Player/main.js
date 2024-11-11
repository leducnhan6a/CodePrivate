const $ = document.querySelector.bind(document);
const $$ = document.querySelectorAll.bind(document);

const player = $('.player');
const heading = $('header h2');
const cdThumb = $('.cd-thumb');
const audio = $('#audio');
const cd = $('.cd');
const playBtn = $('.btn-toggle-play')
const progress = $('#progress')
const nextBtn = $('.btn-next');
const prevBtn = $('.btn-prev');
const randomBtn = $('.btn-random');
const repeatBtn = $('.btn-repeat');


//1. render song
//2. scrollTop
//3. play pause seek
//4. CD rotate
//5. Next/ prev
//6. random 57:50
const app = {
    currentIndex: 0,
    isPlaying: false,
    isRandom: false,
    isRepeat: false,
    songs: [
        {
            name: 'I\'m Not The Only One',
            singer: 'Sam Smith',
            image: './image/SamSmith.jpg',
            path:  './audio/Sam Smith - I\'m Not The Only One (Official Music Video).mp3',

        },
        {
            name: 'Take Me To Church',
            singer: 'Hozier',
            image: './image/Hozier.jpg',
            path:  './audio/Hozier - Take Me To Church.mp3',

        },
        {
            name: 'Dusk Till Dawn',
            singer: 'ZAYN ft.Sia',
            image: './image/zayn.jpg',
            path:  './audio/ZAYN - Dusk Till Dawn (Official Video) ft. Sia.mp3',

        },
        {
            name: 'Hold On',
            singer: 'Chord Overstreet',
            image: './image/OverStreet.jpg',
            path:  './audio/Chord Overstreet - Hold On (Lyric Video).mp3',

        },
    ],
    
    render: function () {
        const htmls = this.songs.map(function (song, index) {
            return  `
            <div class="song ${index == this.currentIndex ? 'active' : ''}">
            <div class="thumb" style="background-image: url('${song.image}')">
            </div>
            <div class="body">
                <h3 class="title">${song.name}</h3>
                <p class="author">${song.singer}</p>
            </div>
            <div class="option">
                <i class="fas fa-ellipsis-h"></i>
            </div>
            </div>
            `
        })
        $('.playlist').innerHTML = htmls.join('');
    },


    //Function
    defineProperties: function (){
        Object.defineProperty(this, 'currentSong', {
            get: function () {
                return this.songs[this.currentIndex];
            }
        })
    },
    handleEvents: function () {
        const _this  = this;
        const cdWidth = cd.offsetWidth;

        //xử lí cd quay và dừng
        const cdThumbAnimate = cdThumb.animate([
            {transform: 'rotate(360deg)'}
        ], {
            duration: 10000,
            iterations: Infinity,
        })
        cdThumbAnimate.pause();



        //lắng nghe sự kiên scroll
        document.onscroll = function () {
            cd.style.width = '100px'
            const scrollTop = window.scrollY || document.documentElement.scrollTop;
            const newcdWidth = cdWidth - scrollTop;
            cd.style.width = (newcdWidth > 0) ? newcdWidth + 'px': 0;
            cd.style.opacity = newcdWidth / cdWidth; // < 1
        }

        //xử lí khi click play/ pause
        playBtn.onclick = function () {
            if(_this.isPlaying) {
                audio.pause();
            } else {
                audio.play();
            }
        }

        //khi song được play
        audio.onplay = function () {
            _this.isPlaying = true;
            player.classList.add('playing');
            cdThumbAnimate.play()   
        }

        //khi song được pause
        audio.onpause = function () {
            _this.isPlaying = false;
            player.classList.remove('playing');
            cdThumbAnimate.pause()
        }

        //khi tiến độ bài hát thay đổi
        audio.ontimeupdate = function () {
            if (audio.duration) {
                const progressPercent = Math.floor(audio.currentTime / audio.duration * 100);
                progress.value = progressPercent;
            }
        }

        //khi tua song
        progress.onchange = function () {
            // audio.currentTime = progress.value/100 * audio.duration;
            const seekTime = (progress.value / 100) * audio.duration;
            audio.currentTime = seekTime;
        }

        //khi next song
        nextBtn.onclick = function () {
            if (this.isRandom) this.playRandomSong(); else {
                _this.nextSong();
            }
            audio.play();
            _this.render();
        }

        // khi prev song
        prevBtn.onclick = function () {
            _this.prevSong();
            audio.play();
            _this.render();

        }

        
        //khi click btn randomSong()
        randomBtn.onclick = function (e) {
            _this.isRandom = ! _this.isRandom;
            randomBtn.classList.toggle('active', _this.isRandom);
            _this.playRandomSong();
            // console.log(_this.isRandom); 
        }

        //xử lí khi audio ended
        audio.onended = function () {
            if (_this.isRepeat) {
                audio.play();
            } else _this.nextSong();
        }

        //xử lí khi btn repeatSoong
        repeatBtn.onclick = function () {
            _this.isRepeat = !_this.isRepeat;
            repeatBtn.classList.toggle('active', _this.isRepeat);
        }

    },
    

    loadCurrentSong: function () {
        heading.textContent = this.currentSong.name;
        cdThumb.style.backgroundImage= `url('${this.currentSong.image}')`;
        audio.src = this.currentSong.path;
    },

    nextSong: function (){
        this.currentIndex++;
        if(this.currentIndex >= this.songs.length) this.currentIndex = 0;
        this.loadCurrentSong();
    },
    prevSong: function () {
        this.currentIndex--;
        if(this.currentIndex < 0) this.currentIndex = this.songs.length  - 1;
        this.loadCurrentSong();
    },
    playRandomSong: function () {
        let newIndex
        do {
            newIndex = Math.floor(Math.random() * this.songs.length);
        } while (newIndex == this.currentIndex);
        this.currentIndex = newIndex;
    },
    // scrollToActiveSong: function () {
        
    // }
   
    start: function () {
        //định nghĩa các thuộc tionsh 
        this.defineProperties();
        //lắng nghe các sự kiện
        this.handleEvents();
        //tải thông tin bài hát đầu tiên vào UI khi chạy  ứng dụng
        this.loadCurrentSong();
        //this
        //render playlist
        this.render()

    }
}

app.start();

    
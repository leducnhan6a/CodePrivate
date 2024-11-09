

var coursesAPI = 'http://localhost:3000/courses';


function start() {
    getCourse(renderCourse);
    handleCreateForm();
}

start();




//Function
function getCourse(callback) {
    fetch(coursesAPI)
        .then(function (response) {
            return response.json()
        })
        .then(callback)
}


function createCourse(data, callback) {
    var options = {
        method: 'POST',
        header: {
            'Content-Type': 'application/json'
        },
        body: JSON.stringify(data)
    }
    fetch(coursesAPI, options)
        .then(function (response) {
            return response.json();
        })
        .then(function (course) {
            return callback;
        });
}

function handleDeleteCourse(id) {
        var options = {
            method: 'DELETE',
            header: {
                'Content-Type': 'application/json'
            },
        }
        // console.log(id);
        fetch(coursesAPI + `/${id}`, options)
            .then(function (response) {
                return response.json();
            })
            .then(function () {
                var courseList = document.querySelector(`#course-${id}`);
                courseList.innerHTML = ``;
            });    
}


function renderCourse(courses) {
    var listCourseBlock = document.querySelector('#list-course');

    var htmls = courses.map(function(course) {
        return `
            <li id="course-${course.id}">
                <h4>${course.name}</h4>
                <p>${course.description}</p> 
                <button onclick="handleDeleteCourse(('${course.id}'))">Xóa</button>
            </li>   
        `;
    }) 
    listCourseBlock.innerHTML = htmls.join('');
}


function handleCreateForm() {
    var createBtn = document.querySelector('#create');

    createBtn.onclick = function () {
        var name = document.querySelector('input[name="Name"]').value;
        var description = document.querySelector('input[name="Description"]').value;
        
        
        var formData = {
            name: name,
            description: description
        }
        // formData.id = `${i}`;
        createCourse(formData, function (data) {
            getCourse(renderCourse);
        });
    };
}



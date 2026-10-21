const todolist = [{
    name: 'make dinner',
    dueDate: '2022-12-22'
},
{
    name: 'make dishes',
    dueDate: '2022-12-23'
}];
renderTodoList();

function renderTodoList() {
    let todoListHTML = '';

    for (let i = 0; i < todolist.length; i++) {
        const todoObject = todolist[i];

        const name = todoObject.name;
        const dueDate = todoObject.dueDate;

        const html = `<div>${name}</div> 
        <div>${dueDate}</div>
         <button onclick="
        todolist.splice(${i},1)

        renderTodoList();
        " class="delete">Delete</button>`

        todoListHTML += html;
    }
    // console.log(todoListHTML)

    document.querySelector('.js-todo-list').innerHTML = todoListHTML;
}
function addTodo() {
    const inputElement = document.querySelector('.js-name-input')
    const dateInput = document.querySelector('.js-due')
    let name = inputElement.value;
    let dueDate = dateInput.value;
    // console.log(name)
    todolist.push({
        name: name,
        dueDate: dueDate

    });

    console.log(todolist)

    inputElement.value = ' '
    renderTodoList();
}

let input = document.querySelector("input")
let displayText = document.querySelector(".display-text")

input.addEventListener("input", inputType)

function inputType() {
    if(input.value % 2 == 0) {
       displayText.textContent = "The number you typed is an even number"
    } else {
        displayText.textContent = "The number you typed is an odd number"
    }
}
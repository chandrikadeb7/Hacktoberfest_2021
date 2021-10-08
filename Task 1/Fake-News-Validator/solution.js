const input = require("readline-sync");
const fakeSources = ["fb","ig","tg","wa"]
let news = input.question("Enter the news__");
let source = input.question("Enter Source of News__{eg.fb,ig,tg,wa}__")

if(fakeSources.includes(source)){
    console.log("fake")
}else{
    console.log("This news might not be fake")
}

function ChangeDiv(el1, el2) {
    var ele1 = document.getElementById(el1);
    var ele2 = document.getElementById(el2);
    
    if(ele1.style.display == "none") {
        ele1.style.display = "block";
        ele2.style.display = "none";
    } else {
        ele1.style.display = "none";
        ele2.style.display = "block";
    }
}

// function ChangeDiv(el) {
//     var display = document.getElementById(el).style.display;
//     if(display == "none")
//         document.getElementById(el).style.display = 'block';
//     else
//         document.getElementById(el).style.display = 'none';
// }
//form validation
var sub = document.getElementById("sb");
sub.onclick= function validate(){
    var n = document.getElementById("fn");
    var m= document.getElementById("pass");
    if(n.value==" " || m.value==" "){
        alert("Field can't be empty");
    }
    else{}
    if(m.value.length<3 || m.value.length>15){
        alert("Password didn't match with the requirement");
    }
    var str=n.value.slice(0,1);
    if(str=="_"||str=="$"){
        alert("Name is not valid");
    }

}
// click event

function clickform()
{
    let fname=document.getElementById("firstname").value;
    let mname=document.getElementById("middlename").value;
    let lname=document.getElementById("lastname").value;
    let male=document.getElementById("male").checked;
    let female=document.getElementById("female").checked;
    let birth=document.getElementById("bdate").value;
    let addr=document.getElementById("address").value;
    let city=document.getElementById("selcity").value;
    let mobile=document.getElementById("mobile").value;
    let mail=document.getElementById("email").value;
    let pass=document.getElementById("pass").value;

    if(fname == "" || fname == null){
        document.getElementById("msg1").innerText = "Enter first name";
        return false;
    }
    else if(mname == "" || mname == null)
    {
        document.getElementById("msg").innerText = "Enter last name";
        return false;
    }
    else if(lname == "" || lname == null)
    {
        document.getElementById("msg2").innerText = "Enter last name";
        return false;
    }
    else if(male == false || female == false)
    {
        document.getElementById("msg3").innerText = " select gender";
        return false;
    }
    else if(birth == "" || birth == null){
        document.getElementById("msg4").innerText = "Select date";
        return false;
    }
    else if(addr == "" || addr == null)
    {
        document.getElementById("msg5").innerText = "Enter address";
        return false;
    }
    else if(city == "-1"){
        document.getElementById("msg6").innerText = "Select city";
        return false;
    }
    else if(mobile == "" || mobile == null)
    {
        document.getElementById("msg7").innerText = "Enter mobile number";
        return false;
    }
    else if(mail == "" || mail == null)
    {
        document.getElementById("msg8").innerText = "Enter email";
        return false;
    }
     else if(pass == "" || pass == null)
    {
        document.getElementById("msg9").innerText = "Enter password";
        return false;
    }
    else
    {
        document.getElementById("msg1").innerText ="";
        document.getElementById("msg").innerText ="";
        document.getElementById("msg2").innerText ="";
        document.getElementById("msg3").innerText ="";
        document.getElementById("msg4").innerText ="";
        document.getElementById("msg5").innerText ="";
        document.getElementById("msg6").innerText ="";
        document.getElementById("msg7").innerText ="";
        document.getElementById("msg8").innerText ="";
        document.getElementById("msg9").innerText ="";
        
        
        return false;
    }
}
// ======================blur event===================

function blankCheck(blnk,spanid)
{
    if(blnk.value == "" || blnk.value == null)
    {
        document.getElementById(spanid).innerText = " Please fill this";
        return false;
    }
    else{
        document.getElementById(spanid).innerText = "";
        // return false
    }
}

function selectValcheck(selectVal,spanid)
{
    if(selectVal.value == "-1" )
    {
        document.getElementById(spanid).innerText = " Select city";
        return false;
    }
}

function radioCheck(selectVal,spanid)
{
    if (selectVal.checked == false && selectVal.checked == false)
    {
        document.getElementById(spanid).innerText = "Select value";
        return false
    }
}

//    ====================keyboard event===============

//  name validation

function regName(inputex,spanid)
{
    let reg= /^[a-zA-Z]*$/
    if(!(reg.test(inputex.value)) || (inputex.value.length < 2))
    {
        document.getElementById(spanid).innerText = "Enter valid name";
        return false;
    }
    else{
        document.getElementById(spanid).innerText = "";
        return false;
    }
}   

//  address length

function addresslength()
{
    let addr = document.getElementById("address").value;
    if(addr.length < 30){
        document.getElementById("msg5").innerText = "address must be more than 30 characters";
        return false;
    }
}

//  mobile

function mobileEx(mobileex,spanid)
{
    let regEx = /^[0-9]*$/;
    let start = /^[6-9]/;
    if(!(regEx.test(mobileex.value)) || (!(start.test(mobileex.value)))){
        document.getElementById(spanid).innerText= "invalid number"
    }
    else
    {
        document.getElementById(spanid).innerText= ""

    }
}

// email

function emaliEx()
{
    let mail=document.getElementById("email").value;
    let regex = /^\w+([\.-]?\w+)*@\w+([\.-]?\w+)*(\.\w{3})+$/
    if(!(regex.test(mail)))
    {
        document.getElementById("msg8").innerText = "Enter proper email id";
        return false;
    }
}

// password expression

function passwordex()
{
    let pass = document.getElementById("password").value;
    let passEx= /^(?=.*\d)(?=.*[a-z])(?=.*[A-Z])(?=.*[^a-zA-Z0-9])(?!.*\s).{8,15}$/;
    if(passEx.test(pass))
    {
        document.getElementById("msg9").innerText ="";
        return false
    }
    else
    {
        document.getElementById("msg9").innerText ="enter password must be in uppercase ,lowercase, number, and special characters";
        return false
    }
}

// compare password

function comparePass()
{
    let pass = document.getElementById("password").value;
    let cpass = document.getElementById("cpassword").value;

    if(cpass != pass)
    {
        document.getElementById("msg10").innerText = "PAssword does not match"
        return false
    }
    else{
        document.getElementById("msg10").innerText = ""
        return false
    }

}

// show Password

function showPass()
{
    let pass = document.getElementById("password");
    let cpass = document.getElementById("cpassword");
    if(pass.type == "password" || cpass.type == "password")
    {
        pass.type = "text";
        cpass.type = "text";
    }
    else{
        pass.type = "password";
        cpass.type = "password";
    }
}
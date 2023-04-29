function validateHTMlform(event)
{
   event.preventDefault();
  let form = document.StudenSignupForm;
  // let [FirstName, LastName, EmailID, Address, Course, City, ] = form;
   if( form.FirstName.value == "" )
   {
     alert( "Enter Your First Name!" );
     form.FirstName.focus() ;
     return;
   }
   if( form.LastName.value == "" )
   {
     alert( "Enter Your Last Name!" );
     form.LastName.focus() ;
     return;
   }
   if( form.Address.value == "" )
   {
     alert( "Enter Your Personal Address!" );
     form.Address.focus() ;
     return;
   }
   if ( ( StudenSignupForm.sex[0].checked == false ) && ( StudenSignupForm.sex[1].checked == false ) )
   {
   alert ( "Choose Your Gender: Male or Female" );
   return false;
   }  
   if( form.City.value == "" )
   {
     alert( "Enter Your City!" );
     form.City.focus() ;
     return;
   }  
   if( form.Course.value == "-1" )
   {
     alert( "Enter Your Course!" );
    
     return;
   }  
   if( form.county.value == "" )
   {
     alert( "Select Your District!" );
    
     return;
   }  
   if( form.State.value == "" )
   {
     alert( "Select Your State!" );
    
     return;
   }
   if( form.pincode.value == "" ||
           isNaN( form.pincode.value) ||
           form.pincode.value.length != 6 )
   {
     alert( "Enter your pincode in format ######." );
     form.pincode.focus() ;
     return;
   }
var email = form.EmailID.value;
  atpos = email.indexOf("@");
  dotpos = email.lastIndexOf(".");
if (email == "" || atpos < 1 || ( dotpos - atpos < 2 ))
{
     alert("Enter your correct email ID")
     form.EmailID.focus() ;
     return;
}
  if( form.dob.value == "" )
   {
     alert( "Enter your DOB!" );
     form.dob.focus() ;
     return;
   }
  if( form.mobileno.value == "" ||
           isNaN( form.mobileno.value) ||
           form.mobileno.value.length != 10 )
   {
     alert( "Enter your Mobile No. in the format 123." );
     form.mobileno.focus() ;
     return;
   }
   return( true );
}
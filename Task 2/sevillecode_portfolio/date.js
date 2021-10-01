// Month and date
var today = new Date();
var dayName = new Array(7);
  dayName[0] = "Sunday";
  dayName[1] = "Monday";
  dayName[2] = "Tuesday";
  dayName[3] = "Wednesday";
  dayName[4] = "Thursday";
  dayName[5] = "Friday";
  dayName[6] = "Saturday";
var monthName = new Array(12);
  monthName[0] = "January";
  monthName[1] = "February";
  monthName[2] = "March";
  monthName[3] = "April";
  monthName[4] = "May";
  monthName[5] = "June";
  monthName[6] = "July";
  monthName[7] = "August";
  monthName[8] = "September";
  monthName[9] = "October";
  monthName[10] = "November";
  monthName[11] = "December";

var date = dayName[today.getDay()] + ', ' + monthName[today.getMonth()] + ' ' + today.getDate() + ', ' + today.getFullYear();
document.getElementById("date").innerHTML = date;
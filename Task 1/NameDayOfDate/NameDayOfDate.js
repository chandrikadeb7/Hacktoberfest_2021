
// The days of the week are: "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"
function getDayName(dateString) {
    let dayName;
    // Write your code here
     const date = new Date(dateString);
     
     const options = {
      weekday: 'long'
    };
  
    dayName = new Intl.DateTimeFormat('en-Us', options).format(date);

    return dayName;
}

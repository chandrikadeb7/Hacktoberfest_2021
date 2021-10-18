function printMissing(arr) {
    arr.sort(); 
    var diff = 0;
    var missingNum;
    var missingIsInRange = false;
    for(var i=0;i<arr.length;i++) {
       if(i+1 == arr.length)
         diff = arr[i] - arr[i-1];
       
       diff = arr[i+1] - arr[i];
       if(diff > 1) {
         missingIsInRange = true;
         missingNum = arr[i] + 1;
         break;
       }
    }
    if(!missingIsInRange){
      if((arr[0] - 1) >= 1)
        missingNum = arr[0] - 1;
      else
        missingNum = arr[arr.length -1] + 1; 
    }
  console.log(missingNum);
}

// Calling the method
var input = [4,5,8,7];
printMissing(input);
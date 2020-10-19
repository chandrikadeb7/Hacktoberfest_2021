var inputs = parseInt(readline());
for (var i = 0; i < inputs; i++) {
  var length = parseInt(readline());
  var binString = readline();
  var strain = 0;
  var currBit = binString[0];
  var operations = 0;
  var spare = 0;
  var waitForSalvation = 0;
  var initialStrain = true;
  for (var j = 0; j < length; j++) {
    if (currBit == binString[j]) {
      strain++;
    } else {
      if (strain > 1) {
        operations++;
        spare += strain - 2;
        if (waitForSalvation < spare) {
          operations += waitForSalvation;
          spare = 0;
          waitForSalvation = 0;
        } else {
          operations += spare;
          waitForSalvation -= spare;
          spare = 0;
        }
      } else {
        waitForSalvation++;
      }
      currBit = binString[j];
      strain = 1;
    }
  }

  if (strain > 1) {
    operations++;

    spare += strain - 2;
    if (waitForSalvation < spare) {
      operations += waitForSalvation;
      spare = 0;
      waitForSalvation = 0;
    } else {
      operations += spare;
      waitForSalvation -= spare;
      spare = 0;
    }
  } else {
    waitForSalvation++;
  }

  operations += Math.ceil(waitForSalvation / 2);
  print(operations);
}

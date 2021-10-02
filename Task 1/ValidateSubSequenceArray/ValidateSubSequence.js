function isValidSubsequence(array, sequence) {
    // Write your code here.
  let seqId =0;
      for(const value of array){
          if(seqId === sequence.length) break;
          if(sequence[seqId] === value) seqId++;
      }
      return seqId === sequence.length
  }
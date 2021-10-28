//Given a squarematrixof sizeN, turn it by 90 degrees in an anti-clockwise direction, as shown in sample input.
// Output
// You have to display therotated matrix.

function rotateBy90(N, matrix){
    //write code here
  for(var i=R-1;i>=0;i--){
      var out=[]
      for(var j=0;j<R;j++){
          out.push(matrix[j][i])
      }
      console.log(out.join(" "))
  }
}
var matrix=[
    [1,2,3,4],
    [5,6,7,8],
    [1,2,3,4],
    [5,6,7,8]
]
var len=matrix.length
var out=rotateBy90(len,matrix)
console.log(out)
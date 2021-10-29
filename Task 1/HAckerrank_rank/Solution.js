var arr=[['rancho',45],['chatur',32],['raju',30],['farhan',28],['virus',32],['joy',45]]
var N=arr.length;
for(var i=0;i<N;i++){
    var min=i
    for(var j=i+1;j<N;j++){
        if(arr[min][1]<=arr[j][1]){
            min=j
        }
    }
    var temp=arr[i]
    arr[i]=arr[min]
    arr[min]=temp

}
var rank=1
var a=1
for(var i=0;i<N;i++){
    if(i>0){
        if(arr[i-1][1]==arr[i][1]){
            console.log(rank+" "+arr[i][0])
            a++
        }
        else{
            rank=rank+a
            console.log(rank+" "+arr[i][0])
            a=1
        }
        
       
    }else{
        console.log(rank+" "+arr[i][0])
        
        
    }
}
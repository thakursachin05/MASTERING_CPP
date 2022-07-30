let arr = []; //Given
let n ; // Given

let sum = 0;
arr.map((item) => {
    sum = sum + item;
}
)

sum = sum/arr.length;

let result = 0;
arr.map((item) =>{
    if(item < sum){
        result = result + (sum-item);
    }
})

return result;

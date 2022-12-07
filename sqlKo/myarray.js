const array = [1, 2, 3, 4, 5];

console.log(`배열 : ${ array }`);
console.log(`배열 : ${ 2 + 3 }`);

//객체배열
const objects = [
    {
        name : '멍멍이'
    },
    {
        name : '야옹이'
    }

]   //갯수가 2개인 오브젝트 배열
console.log(`객체 ${ objects }`);
//objects= [];  const 키워드는 창고대여업체
objects[0] = 20000;
console.log(
    "객체배열의 갯수 = ",
    objects.length
)
console.log(
    "0번째 요소 = ",
    objects[0]
)
// 프로그래시브 웹기술(Progressive Web);

objects.push({
    name : '멍멍이'
})

console.log(objects)
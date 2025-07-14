// This is single line comment
/* Multiline Comment
alert("hello")
alert("hi")
*/

document.write("Hello ,good evening!")

var fname="Madhav" //decalring and assigning
console.log(fname)

let age =22
console.log(age)
console.log(typeof(age))

let salary=40000.5
console.log(salary)

const pi=3.14
// pi=3.1415 - Cannot reassign

let canVote =false
console.log(canVote)

let e
console.log(e) //undefined
console.log(typeof(e)) //undefined

let f= null
console.log(f)




const fav_colors = ['pink','purple','white']
console.log(fav_colors)
console.log(fav_colors[0])
console.log(fav_colors[1])
console.log(fav_colors[2])
console.log(fav_colors[3])//undefined
console.log(fav_colors.length)

let fav_days=[]
fav_days[0]="Sunday"
fav_days[1]="Saturday"
console.log(fav_days[0])
console.log(fav_days[1])

//objects
const car = {
    name:"Kia Seltos",
    color:"Balck",
    weight:500

}
console.log(car)
console.log(car.name)
console.log(car.color)
console.log(car.weight)

//Arithmetic operators

console.log(10**3)//exponent operator

let a=10
let b=10

let result
result=a/b
console.log(result)

result=a%b
console.log(result)

//Assignment operator
let c =20
c/50
console.log(c)

//Comparison operators
let x=5
console.log(x=="5") //value conparison
console.log(x!="5") //not equal
console.log(x<5) //less than
console.log(x>=5) //greater than or equal to


//Logical Operator
//OR,AND,NOT

let x1 = 6
let y1 = 3
console.log(x1<10 && y1>5) //Logical AND
console.log(x1==6 || y1==5) //Logical OR
console.log(!(x1==y1)) //Logical NOT

//conditionals

let temperature = 17

if(temperature>25){
    console.log("Its Hot Ourside")
}
else if(temperature>15){
    console.log("Its Warm Outside")
}
else if(temperature>10){
    console.log("Its Cold Outside")
}
else{
    console.log("Its Very Cold Outside")
}



//loops
//for loop
//initializing , increment/decrement , exit

for(let i=0;i<5;i++){
    console.log(10)
}

//Functions
//declare a function -no parameters
function greet(){
    console.log("Hello user")
}
//call function
greet()

function welcome(name){
    console.log("Hello" + name)
}

welcome(" Madhav")

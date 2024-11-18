interface Student {
	firstName: string;
	lastName: string;
	age: number;
	location: string;
}

const student1 : Student = {firstName: "Ebrima", lastName: "jallow", age: 10, location: "Busumbala"}

const student2 : Student = {firstName: "Buba", lastName:"Manneh", age: 30, location: "Buniadu"}

//console.log(student1, student2)

const studentsList: Array<Student> =[student1, student2]

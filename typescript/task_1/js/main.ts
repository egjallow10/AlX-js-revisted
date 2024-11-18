interface Teacher {
	readonly firstName: string;
	readonly lastName: string;
	fullTimeEmployee: boolean;
	yearsOfExperience?: number;
	location: string;
	[property: string]: any;
}

const teacher3: Teacher = {
	firstName: 'John',
	lastName: 'Doe',
	fullTimeEmployee:false,
	yearsOfExperience: 4,
	location: 'London',
	contract: false,
};
console.log(teacher3);

interface Directors extends Teacher{
	numberOfReports: number;
}

const director1: Directors = {
		firstName: 'John',
		lastName: 'Doe',
		location: 'London',
		fullTimeEmployee: true,
		numberOfReports: 17,
	
}
console.log(director1);

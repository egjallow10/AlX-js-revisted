const getStudentsByLocation= (getListStudents, city) => {
	//const returnArr = [];
	const result = getListStudents.filter((element)=>{
		console.log(element.location)
		element.location === city;
	})
	return result;
}
export default getStudentsByLocation;
	

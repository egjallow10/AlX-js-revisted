const getStudentsByLocation= (array, city) => {
	return array.filter((ele)=>{
		ele.location === city;
	})
}
export default getStudentsByLocation;
	

const getListStudentIds = (listOfArray)=>{
	if(Array.isArray(listOfArray)) {
		const returnList = [];
		for(let elements of listOfArray) {
			returnList.push(elements.id)
		}
		return returnList
	}else{
		return []
	}
}
export default getListStudentIds

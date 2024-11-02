const getListStudentIds = (listOfArray)=>{
	if(Array.isArray(listOfArray)) {
		const returnList = [];
		for( elements of listOfArray) {
			returnList.push(elements.id)
		}
		return returnList
	}else{
		return []
	}
}

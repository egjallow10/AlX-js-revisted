#!/usr/bin/env node

//for of on arrays
export default function appendToEachArrayValue(array, appendString){
	for (let idx of array) {
		const index = array.indexOf(idx);
		array[index]= appendString + idx;
	}
	return array;
	
}

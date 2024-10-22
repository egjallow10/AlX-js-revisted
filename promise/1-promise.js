#!/usr/bin/env node

export default function getResponseFromAPI(success){
	const response = new Promise((resolve,reject)=>{
		if(success){
			resolve({status:200, body:'Success'});
		}else{
			reject(new Error('The fake api isnot working currently'));
		}
	});
	return response;
}


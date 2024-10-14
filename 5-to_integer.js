#!/usr/bin/env node
"script that prints My number: <first argument converted in integer>"
const argv = process.argv.slice(2)

if(argv.length  === 0 && isNaN(argv[0])){
	console.log('Not a number')
}else{
	console.log(`My number: Number(argv[0])`)
}

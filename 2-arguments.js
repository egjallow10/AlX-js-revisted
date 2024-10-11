#!/usr/bin/env node
"cript that prints a message depending of the number of arguments passed"
const argv = process.argv.slice(2);
//console.log(argv);
if (argv.length === 0) {
	console.log('No argument');
}else if (argv.length === 1){
	console.log('Argument found');
}else{
	console.log('Arguments found');
}

#!/usr/bin/env node
"cript that prints a message depending of the number of arguments passed"
const argv = process.argv.slice(2);
//console.log(argv);
if (argv.length === 0) {
	console.log(`${argv[0]} is ${argv[1]}`)

}else {
	console.log(`${argv[0]} is ${argv[1]}`)
}

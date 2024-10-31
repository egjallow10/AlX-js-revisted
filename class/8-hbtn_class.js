

export default class HolbertonClass {
	constructor(size, locatio){
		this._size = size,
		this._location = locatio
	}

	[Symbol.toPrimitive](hint){
		if(hint === "number") {
			return this._size;
		}else if (hint === "string"){
			return this._location;
		}
		return null
	}
}

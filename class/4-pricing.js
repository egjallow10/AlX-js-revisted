import Currency from './3-currency.js'


export default class Pricing {
	constructor( amount, Currency){
		this._amount = amount,
		this._currency = Currency
	}

	get name() {
		return this._amount = amount;
	}
	
	get currency() {
		return this._currency;
	}

	set name(name) {
		this._amount = amount;
	}

	set currency(Currency) {
		this._currency = Currency;
	}

	displayFullPrice() {
		return `${this._amount} ${this.currency.name} ${this.currency.code} `
	}

	convertPrice(amount, conversionRate) {
		return amount * conversionRate;
	}
}


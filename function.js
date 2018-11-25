function isIn(array,x){
	xtype = typeof x
	isIn = false
	array.forEach(function(element) {
		elementtype = typeof element
		checker = elementtype == xtype
		if(x==element && checker) {
			isIn=true
		}

	});
	console.log(isIn)
}

array = [1,2,3]
x=1
isIn(array,x)
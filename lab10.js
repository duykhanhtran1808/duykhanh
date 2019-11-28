const customer = {
    name: "",
    phoneNumber: 123,
    address: "",
    showInfo: function () {
        console.log('Anh/Chi ' + this.name + ', SDT: '+ this.phoneNumber+ ', Dia chi: ' + this.address)
    },
    setInfo: function (nameX, phoneX, addressX) {
        this.name = nameX
        this.phoneNumber = phoneX
        this.address = addressX
        return this
    }
}

var customerArray = []
var c1 = Object.create(customer)
c1.setInfo("ABC",0976,"Ha Noi")
customerArray.push(c1)

var c2 = Object.create(customer)
c2.setInfo("Voi",094476,"Ha Nam")
customerArray.push(c2)
customerArray.push(Object.create(customer).setInfo("Ga",2525,"Hoa Binh"))

customerArray.map(async(value) => {
    value.showInfo()
})




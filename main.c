// Enter electricity unit and calculate amount to pay
// For first 50 units, Rs: 1/unit
// For next 100 units, 2/unit
// For next 100 units, 3/ units
// For units above 250, 4/units      
// For all bills above 150 units additional surcharge of 20%  of total bill amount is added.

units = 1000
bill = 0
if(units<=50){
  bill  = units*1
}
else if(units <=150){
  bill = 50*1 + (units-50)*2
}
else if(units <=250){
  bill = 50*1 + 100*2 + (units-150)*3
}
else if(units>250){
  bill = 50*1 + 100*2 + 150*3 + (units-250) *4
}

if(bill>150){
  bill = bill + bill*0.2
}

console.log(bill)

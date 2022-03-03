function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "factorial_SF"};
	this.sidHashMap["factorial_SF"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "factorial_SF:1"};
	this.sidHashMap["factorial_SF:1"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<Root>/Input"] = {sid: "factorial_SF:2"};
	this.sidHashMap["factorial_SF:2"] = {rtwname: "<Root>/Input"};
	this.rtwnameHashMap["<Root>/Chart"] = {sid: "factorial_SF:1"};
	this.sidHashMap["factorial_SF:1"] = {rtwname: "<Root>/Chart"};
	this.rtwnameHashMap["<Root>/Constant"] = {sid: "factorial_SF:5"};
	this.sidHashMap["factorial_SF:5"] = {rtwname: "<Root>/Constant"};
	this.rtwnameHashMap["<Root>/Display"] = {sid: "factorial_SF:7"};
	this.sidHashMap["factorial_SF:7"] = {rtwname: "<Root>/Display"};
	this.rtwnameHashMap["<Root>/Output"] = {sid: "factorial_SF:4"};
	this.sidHashMap["factorial_SF:4"] = {rtwname: "<Root>/Output"};
	this.rtwnameHashMap["<S1>:5"] = {sid: "factorial_SF:1:5"};
	this.sidHashMap["factorial_SF:1:5"] = {rtwname: "<S1>:5"};
	this.rtwnameHashMap["<S1>:7"] = {sid: "factorial_SF:1:7"};
	this.sidHashMap["factorial_SF:1:7"] = {rtwname: "<S1>:7"};
	this.rtwnameHashMap["<S1>:8"] = {sid: "factorial_SF:1:8"};
	this.sidHashMap["factorial_SF:1:8"] = {rtwname: "<S1>:8"};
	this.rtwnameHashMap["<S1>:10"] = {sid: "factorial_SF:1:10"};
	this.sidHashMap["factorial_SF:1:10"] = {rtwname: "<S1>:10"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
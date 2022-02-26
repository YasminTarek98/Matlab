function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "matFunc"};
	this.sidHashMap["matFunc"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "matFunc:1"};
	this.sidHashMap["matFunc:1"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<Root>/In1"] = {sid: "matFunc:8"};
	this.sidHashMap["matFunc:8"] = {rtwname: "<Root>/In1"};
	this.rtwnameHashMap["<Root>/Constant"] = {sid: "matFunc:7"};
	this.sidHashMap["matFunc:7"] = {rtwname: "<Root>/Constant"};
	this.rtwnameHashMap["<Root>/Display"] = {sid: "matFunc:4"};
	this.sidHashMap["matFunc:4"] = {rtwname: "<Root>/Display"};
	this.rtwnameHashMap["<Root>/MATLAB Function"] = {sid: "matFunc:1"};
	this.sidHashMap["matFunc:1"] = {rtwname: "<Root>/MATLAB Function"};
	this.rtwnameHashMap["<Root>/Out1"] = {sid: "matFunc:3"};
	this.sidHashMap["matFunc:3"] = {rtwname: "<Root>/Out1"};
	this.rtwnameHashMap["<S1>:1"] = {sid: "matFunc:1:1"};
	this.sidHashMap["matFunc:1:1"] = {rtwname: "<S1>:1"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();

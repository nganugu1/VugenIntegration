Action()
{
	
	lr_start_transaction("T03");

	web_custom_request("web_custom_request",
		"URL=www.cnn.com",
		"Method=GET",
		"TargetFrame=",
		"Resource=0",
		"Referer=",
		"Body=",
		LAST);

	lr_end_transaction("T03", LR_AUTO);

	
	
	return 0;
}

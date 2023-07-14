Action()
{
	
	lr_start_transaction("T05");

	web_custom_request("web_custom_request",
		"URL=www.cnn.com",
		"Method=GET",
		"TargetFrame=",
		"Resource=0",
		"Referer=",
		"Body=",
		LAST);

	lr_end_transaction("T05", LR_AUTO);

	
	
	return 0;
}

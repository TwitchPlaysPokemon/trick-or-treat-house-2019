TrickHouseDevEntrance_MapScripts::
	.byte 0

TrickHouseDevEntrance_EventScript_Red::
	msgbox TrickHouseDevEntrance_EventScript_Red_Text_0, MSGBOX_NPC
	return


TrickHouseDevEntrance_EventScript_Red_Text_0:
	.string "This is the dev room. You can change\n"
	.string "the current puzzle at the TV.\p"
	.string "If you didn't get here via the door\n"
	.string "outside, something went wrong;\l"
	.string "Please report this to the devs.$"
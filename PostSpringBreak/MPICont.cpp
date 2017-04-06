/*
When you trace in parallel, you do everything the same, for however many times we are running
It makes no difference where you start. Start at P0 or P1. Doesnt matter

Proc1								Proc 2
MyRank = 0							MyRank = 1
Proc = 2							Proc = 2
Message = "Beep" | "Boop" 			Message = "Beep"
									MessageOverwrite = "Boop"
line 43 - Busy Waiting, Blocked 	DoneWithProc2



Somewhere over here there is a mailbox.
Lets think of send a message. 
Format
	"Boop"		4				Char		1
Send(Message, lengthOfMessage, Language, #"Meaning to Proc1") FLAGUP

[Waiting. Waiting. Waiting.]

	"Boop"		OK						Char		0
Recv(Message, No more than 100 Length, Language, #"Meaning from proc0")

#LivingTheNightMare



*/
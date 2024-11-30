Grades		DCD		0x41414342,0x44444342,0x00414242
Top1			FILL		4
BG			Fill		4
Pass			Fill		4
Base			DCD		0x70,0x78,0x80,0x88
			
			ADR		R3,Grades
			ADR		R2,Top1
			ADR		R1,BG
			ADR		R0,Pass
			STMFD	SP!,{R0-R3}
			BL		Cal_grades
			LDMFD	SP!,{R0-R3}
			END
			
Cal_grades	STMFD	SP!,{R4-R9}
			ADR		R9 ,Base
			MOV		R4 ,#0
			MOV		R5 ,#0
			MOV		R6 ,#0
			LDR		R8,[SP,#36]
Loop			LDRB		R7,[R8],#1
			CMP		R7,#0
			BEQ		Done
			SUB		R7, R7, #65
			LDR		PC,[R9,R7,LSL #2]
Return		B		Loop
Done			LDR		R8,[SP,#32]
			STR		R4,[R8]
			LDR		R8,[SP,#28]
			STR		R5,[R8]
			LDR		R8,[SP,#24]
			STR		R6,[R8]
			LDMFD	SP!,{R4-R9}
			MOV		PC, LR
			
Cond1		ADD		R4,R4,#1
			B		Return
Cond2		ADD		R5,R5,#1
			B		Return
Cond3		ADD		R6,R6,#1
			B		Return
Cond4		ADD		R6,R6,#1
			B		Return

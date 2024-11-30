X_array	DCD		0x1,0x0A,0x2,0x4
Y_array	DCD		0x8,0x2,0x0F,0x1
Z_Value	FILL		4
		
		LDR		R3,=X_array
		LDR		R2,=Y_array
		LDR		R0,=Z_Value
		MOV		R1,#4
		STMFD	SP!,{R0-R3}
		BL		DotProd
		ADD		SP,SP,#16
		END
		
DotProd	STMFD	SP!,{R4-R7,LR}	;Store regs to stack
		LDR		R4 ,[SP,#32]	;Read location of X
		LDR		R5 ,[SP,#28]	;Read location of Y
		LDR		R6 ,[SP,#24]	;Read arrays length
		MOV		R7, #0		; Clear R7 (Sum)
Loop1	LDR		R0 ,[R4],#4  	; Get X[i]
		LDR		R1 ,[R5],#4		; Get Y[i]
		
		BL		Mult			; Call Mult Subroutine
		
		ADD		R7,R7,R12		; Add the product to R7
		SUBS		R6,R6,#1		; Reduce the counter by 1
		BNE		Loop1			; not 0 then repeat
		LDR		R4, [SP,#20]	; read destination address
		STR		R7, [R4]		; Store in destination address
		LDMFD	SP!,{R4-R7,LR}	; Restore registers
		MOV		PC, LR		; same as bx lr
		
		
		
Mult		MOV		R12,#0		;Clear R12
Loop		ADD		R12,R12,R0	;Add R0 to R12
		SUBS		R1,R1,#1		;Decrement R1 with 1
		BNE		Loop
		MOV		PC, LR		; same as bx lr

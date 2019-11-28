################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_UPPER_SRCS += \
../ADC.C \
../CAN.C \
../IO.C \
../MAIN.C \
../SHARED_INT.C \
../T2.C \
../UART.C 

S_SRCS += \
../MemInitxc88x.s \
../startupxc886.s 

REL_OUTPUTS += \
./ADC.rel \
./CAN.rel \
./IO.rel \
./MAIN.rel \
./MemInitxc88x.rel \
./SHARED_INT.rel \
./T2.rel \
./UART.rel \
./startupxc886.rel 

XC800_COMPILER_OUTPUT_TYPE_OUTPUTS += \
./ADC.s \
./CAN.s \
./IO.s \
./MAIN.s \
./SHARED_INT.s \
./T2.s \
./UART.s 

DOUBLE_QUOTED_REL_OUTPUTS += \
"./ADC.rel" \
"./CAN.rel" \
"./IO.rel" \
"./MAIN.rel" \
"./MemInitxc88x.rel" \
"./SHARED_INT.rel" \
"./T2.rel" \
"./UART.rel" \
"./startupxc886.rel" 


# Each subdirectory must supply rules for building sources it contributes
%.s: ../%.C
	@echo 'Building file: $<'
	@echo 'Invoking: SDCC Compiler'
	"C:/DAVE-Bench-201\SDCC_XC800\bin\sdcc" -mXC800 -pXC888_8FF --model-small  -I"C:/DAVE-Bench-201\SDCC_XC800\include" -I"C:/DAVE-Bench-201\SDCC_XC800\include\xc800" -I"C:/DAVE-Bench-201\SDCC_XC800\include\asm\xc800" --opt-code-size --nooverlay --noinduction --debug -S  -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

%.rel: ./%.s
	@echo 'Building file: $<'
	@echo 'Invoking: SDCC Assembler'
	"C:/DAVE-Bench-201\SDCC_XC800\bin\as-xc800" -plosgffcx "$<" -O "$@"
	@echo 'Finished building: $<'
	@echo ' '

%.rel: ../%.s
	@echo 'Building file: $<'
	@echo 'Invoking: SDCC Assembler'
	"C:/DAVE-Bench-201\SDCC_XC800\bin\as-xc800" -plosgffcx "$<" -O "$@"
	@echo 'Finished building: $<'
	@echo ' '



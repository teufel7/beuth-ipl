################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := del /F

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir.mk
-include objects.mk

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: adc_zu_can.hex

# Variable to hold the miscellaneous files generatd by Linker
LINKER_MISCL_FILES += \
"adc_zu_can.lkr" \
"adc_zu_can.cdb" \
"adc_zu_can.map" \
"adc_zu_can.mem" \
"adc_zu_can" 

# Tool invocations
adc_zu_can.hex: $(REL_OUTPUTS)
	@echo 'Building target: $@'
	@echo 'Invoking: SDCC Linker'
	"C:/DAVE-Bench-201\SDCC_XC800\bin\sdcc" --debug -mXC800 -pXC888_8FF --model-small --iram-size 0x100 -Wl -bBSEG=0x20 --xram-loc 0xF000 --xram-size 0x600 --code-loc 0x000 --code-size 0x8000 --data-loc 0x00 --idata-loc 0x80 --stack-loc 0x80 -Wl -bPSEG=0xF000 -o "./adc_zu_can.hex" $(DOUBLE_QUOTED_REL_OUTPUTS)
	@echo 'Finished building target: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) /S *.s *.rel *.lst *.rst *.sym *.adb $(LINKER_MISCL_FILES)  "adc_zu_can.hex"
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets

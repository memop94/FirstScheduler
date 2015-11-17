################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"../Sources/MAL/OS_Init.c" \

C_SRCS += \
../Sources/MAL/OS_Init.c \

OBJS += \
./Sources/MAL/OS_Init_c.obj \

OBJS_QUOTED += \
"./Sources/MAL/OS_Init_c.obj" \

C_DEPS += \
./Sources/MAL/OS_Init_c.d \

OBJS_OS_FORMAT += \
./Sources/MAL/OS_Init_c.obj \

C_DEPS_QUOTED += \
"./Sources/MAL/OS_Init_c.d" \


# Each subdirectory must supply rules for building sources it contributes
Sources/MAL/OS_Init_c.obj: ../Sources/MAL/OS_Init.c
	@echo 'Building file: $<'
	@echo 'Executing target #2 $<'
	@echo 'Invoking: PowerPC Compiler'
	"$(PAToolsDirEnv)/mwcceppc" @@"Sources/MAL/OS_Init.args" -o "Sources/MAL/OS_Init_c.obj" "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '

Sources/MAL/%.d: ../Sources/MAL/%.c
	@echo 'Regenerating dependency file: $@'
	
	@echo ' '



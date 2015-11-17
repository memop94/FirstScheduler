################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"../Sources/API/TASK_Init.c" \

C_SRCS += \
../Sources/API/TASK_Init.c \

OBJS += \
./Sources/API/TASK_Init_c.obj \

OBJS_QUOTED += \
"./Sources/API/TASK_Init_c.obj" \

C_DEPS += \
./Sources/API/TASK_Init_c.d \

OBJS_OS_FORMAT += \
./Sources/API/TASK_Init_c.obj \

C_DEPS_QUOTED += \
"./Sources/API/TASK_Init_c.d" \


# Each subdirectory must supply rules for building sources it contributes
Sources/API/TASK_Init_c.obj: ../Sources/API/TASK_Init.c
	@echo 'Building file: $<'
	@echo 'Executing target #8 $<'
	@echo 'Invoking: PowerPC Compiler'
	"$(PAToolsDirEnv)/mwcceppc" @@"Sources/API/TASK_Init.args" -o "Sources/API/TASK_Init_c.obj" "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '

Sources/API/%.d: ../Sources/API/%.c
	@echo 'Regenerating dependency file: $@'
	
	@echo ' '



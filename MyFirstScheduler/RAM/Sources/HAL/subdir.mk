################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"../Sources/HAL/Exceptions.c" \
"../Sources/HAL/GPIO_APP.c" \
"../Sources/HAL/Global_Init.c" \
"../Sources/HAL/IntcInterrupts.c" \
"../Sources/HAL/ivor_branch_table.c" \

C_SRCS += \
../Sources/HAL/Exceptions.c \
../Sources/HAL/GPIO_APP.c \
../Sources/HAL/Global_Init.c \
../Sources/HAL/IntcInterrupts.c \
../Sources/HAL/ivor_branch_table.c \

OBJS += \
./Sources/HAL/Exceptions_c.obj \
./Sources/HAL/GPIO_APP_c.obj \
./Sources/HAL/Global_Init_c.obj \
./Sources/HAL/IntcInterrupts_c.obj \
./Sources/HAL/ivor_branch_table_c.obj \

OBJS_QUOTED += \
"./Sources/HAL/Exceptions_c.obj" \
"./Sources/HAL/GPIO_APP_c.obj" \
"./Sources/HAL/Global_Init_c.obj" \
"./Sources/HAL/IntcInterrupts_c.obj" \
"./Sources/HAL/ivor_branch_table_c.obj" \

C_DEPS += \
./Sources/HAL/Exceptions_c.d \
./Sources/HAL/GPIO_APP_c.d \
./Sources/HAL/Global_Init_c.d \
./Sources/HAL/IntcInterrupts_c.d \
./Sources/HAL/ivor_branch_table_c.d \

OBJS_OS_FORMAT += \
./Sources/HAL/Exceptions_c.obj \
./Sources/HAL/GPIO_APP_c.obj \
./Sources/HAL/Global_Init_c.obj \
./Sources/HAL/IntcInterrupts_c.obj \
./Sources/HAL/ivor_branch_table_c.obj \

C_DEPS_QUOTED += \
"./Sources/HAL/Exceptions_c.d" \
"./Sources/HAL/GPIO_APP_c.d" \
"./Sources/HAL/Global_Init_c.d" \
"./Sources/HAL/IntcInterrupts_c.d" \
"./Sources/HAL/ivor_branch_table_c.d" \


# Each subdirectory must supply rules for building sources it contributes
Sources/HAL/Exceptions_c.obj: ../Sources/HAL/Exceptions.c
	@echo 'Building file: $<'
	@echo 'Executing target #3 $<'
	@echo 'Invoking: PowerPC Compiler'
	"$(PAToolsDirEnv)/mwcceppc" @@"Sources/HAL/Exceptions.args" -o "Sources/HAL/Exceptions_c.obj" "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '

Sources/HAL/%.d: ../Sources/HAL/%.c
	@echo 'Regenerating dependency file: $@'
	
	@echo ' '

Sources/HAL/GPIO_APP_c.obj: ../Sources/HAL/GPIO_APP.c
	@echo 'Building file: $<'
	@echo 'Executing target #4 $<'
	@echo 'Invoking: PowerPC Compiler'
	"$(PAToolsDirEnv)/mwcceppc" @@"Sources/HAL/GPIO_APP.args" -o "Sources/HAL/GPIO_APP_c.obj" "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '

Sources/HAL/Global_Init_c.obj: ../Sources/HAL/Global_Init.c
	@echo 'Building file: $<'
	@echo 'Executing target #5 $<'
	@echo 'Invoking: PowerPC Compiler'
	"$(PAToolsDirEnv)/mwcceppc" @@"Sources/HAL/Global_Init.args" -o "Sources/HAL/Global_Init_c.obj" "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '

Sources/HAL/IntcInterrupts_c.obj: ../Sources/HAL/IntcInterrupts.c
	@echo 'Building file: $<'
	@echo 'Executing target #6 $<'
	@echo 'Invoking: PowerPC Compiler'
	"$(PAToolsDirEnv)/mwcceppc" @@"Sources/HAL/IntcInterrupts.args" -o "Sources/HAL/IntcInterrupts_c.obj" "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '

Sources/HAL/ivor_branch_table_c.obj: ../Sources/HAL/ivor_branch_table.c
	@echo 'Building file: $<'
	@echo 'Executing target #7 $<'
	@echo 'Invoking: PowerPC Compiler'
	"$(PAToolsDirEnv)/mwcceppc" @@"Sources/HAL/ivor_branch_table.args" -o "Sources/HAL/ivor_branch_table_c.obj" "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '



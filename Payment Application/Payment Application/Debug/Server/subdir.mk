################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Server/Server.c 

OBJS += \
./Server/Server.o 

C_DEPS += \
./Server/Server.d 


# Each subdirectory must supply rules for building sources it contributes
Server/%.o: ../Server/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C Compiler'
	gcc -I"C:\Users\fadye\STM32CubeIDE\workspace_1.4.0\Payment Application\Application" -I"C:\Users\fadye\STM32CubeIDE\workspace_1.4.0\Payment Application\Card" -I"C:\Users\fadye\STM32CubeIDE\workspace_1.4.0\Payment Application\Server" -I"C:\Users\fadye\STM32CubeIDE\workspace_1.4.0\Payment Application\Terminal" -I"C:\Users\fadye\STM32CubeIDE\workspace_1.4.0\Payment Application\Terminal" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



.PHONY: clean All

All:
	@echo "----------Building project:[ Using_Size_of_operator - Debug ]----------"
	@cd "Using_Size_of_operator" && "$(MAKE)" -f  "Using_Size_of_operator.mk"
clean:
	@echo "----------Cleaning project:[ Using_Size_of_operator - Debug ]----------"
	@cd "Using_Size_of_operator" && "$(MAKE)" -f  "Using_Size_of_operator.mk" clean

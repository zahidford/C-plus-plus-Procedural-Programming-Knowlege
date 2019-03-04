.PHONY: clean All

All:
	@echo "----------Building project:[ pointer_to_functions_3 - Debug ]----------"
	@cd "pointer_to_functions_3" && "$(MAKE)" -f  "pointer_to_functions_3.mk"
clean:
	@echo "----------Cleaning project:[ pointer_to_functions_3 - Debug ]----------"
	@cd "pointer_to_functions_3" && "$(MAKE)" -f  "pointer_to_functions_3.mk" clean

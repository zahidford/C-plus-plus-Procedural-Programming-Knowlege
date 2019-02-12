.PHONY: clean All

All:
	@echo "----------Building project:[ Counting_number_of_change - Debug ]----------"
	@cd "Counting_number_of_change" && "$(MAKE)" -f  "Counting_number_of_change.mk"
clean:
	@echo "----------Cleaning project:[ Counting_number_of_change - Debug ]----------"
	@cd "Counting_number_of_change" && "$(MAKE)" -f  "Counting_number_of_change.mk" clean

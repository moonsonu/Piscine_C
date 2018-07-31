#!/usr/bin/env perl
					use strict;
					use warnings;
					use feature 'say';

					my $program = './work/ex01/ft_print_program_name';
					my $output;
					my $expected;

					

my %tests;

					%tests = (
	"$program" => "$program\n",
	"$program a b c" => "$program\n",
);

					


					my $errors = 0;
					foreach my $test (sort keys %tests) {
						$output = `$test`;
						$expected = $tests{$test};
						if ($output ne $expected) {
							say "!!!! ERROR in work/ex01/check.pl test `$test`: '$output'";
							say "!!!! EXPECTED: '$expected'" if defined $expected;
							$errors++;
						}
						# else { say "debug good: $output"; }
					}
					if ($errors == 0) {
						say 'work/ex01/check.pl good!';
					}
				
				
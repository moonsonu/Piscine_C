#!/usr/bin/env perl
					use strict;
					use warnings;
					use feature 'say';

					my $program = './work/ex02/ft_print_params';
					my $output;
					my $expected;

					

my %tests;

					%tests = (
	"$program" => "",
	"$program a" => "a\n",
	"$program a b" => "a\nb\n",
	"$program asdf beta char" => "asdf\nbeta\nchar\n",
	"$program 'hello world' !" => "hello world\n!\n",
	"$program '' lol" => "\nlol\n",
);

					


					my $errors = 0;
					foreach my $test (sort keys %tests) {
						$output = `$test`;
						$expected = $tests{$test};
						if ($output ne $expected) {
							say "!!!! ERROR in work/ex02/check.pl test `$test`: '$output'";
							say "!!!! EXPECTED: '$expected'" if defined $expected;
							$errors++;
						}
						# else { say "debug good: $output"; }
					}
					if ($errors == 0) {
						say 'work/ex02/check.pl good!';
					}
				
				